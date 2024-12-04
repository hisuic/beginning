import numpy as np
import matplotlib.pyplot as plt
import matplotlib.animation as animation

# 定数の設定
g = 9.8  # 重力加速度 (m/s^2)
L = 1.0  # 振り子の長さ (m)

# シミュレーションのパラメータ
theta0 = np.pi / 4  # 初期角度 (ラジアン)
omega0 = 0.0       # 初期角速度 (rad/s)
dt = 0.01          # 時間刻み幅 (s)
t_max = 10.0       # シミュレーションの時間 (s)

# 時間の配列を作成
t = np.arange(0.0, t_max, dt)

# 振り子の角度と角速度の配列を初期化
theta = np.zeros_like(t)
omega = np.zeros_like(t)

# 初期条件を設定
theta[0] = theta0
omega[0] = omega0

# 振り子の運動方程式を解く
for i in range(1, len(t)):
    theta[i] = theta[i-1] + omega[i-1] * dt
    omega[i] = omega[i-1] - (g / L) * np.sin(theta[i-1]) * dt

# グラフの初期化
fig = plt.figure()
ax = fig.add_subplot(111, aspect='equal', autoscale_on=False, xlim=(-1.2, 1.2), ylim=(-1.2, 1.2))
ax.grid()

line, = ax.plot([], [], 'o-', lw=2)

# アニメーションのフレーム更新のための関数
def update(frame):
    x = [0, L * np.sin(theta[frame])]
    y = [0, -L * np.cos(theta[frame])]
    line.set_data(x, y)
    return line,

# アニメーションの作成
ani = animation.FuncAnimation(fig, update, frames=len(t), interval=dt*1000, blit=True)

# アニメーションの表示
plt.show()
