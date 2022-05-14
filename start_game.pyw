#funkcja_startu_gry
def start_game(event):
    global playing
    if playing is False:
        playing = True
	score.configure(text="Score: 00")
        canvas.delete("all")
        BALL_COLOR = ["black"]
        BRICK_COLOR = ["Green", "Red", "Yellow", "Orange", "Pink", "Blue"]
        random.shuffle(BALL_COLOR)
        paddle = Paddle(canvas, "Dark Blue")
        bricks = []
	for i in range(0, 5):
            b = []
            for j in range(0, 19):
                random.shuffle(BRICK_COLOR)
                tmp = Bricks(canvas, BRICK_COLOR[0])
                b.append(tmp)
            bricks.append(b)
	#przypadki_WON_LOSE_PAUSE
        time.sleep(1)
        while 1:
            if paddle.pausec !=1:
                try:
                    canvas.delete(m)
                    del m
                except:
                    pass
		if not ball.bottom_hit:
                    ball.draw()
                    paddle.draw()
                    root.update_idletasks()
                    root.update()
                    time.sleep(0.01)
                    if ball.hit==95:
                        canvas.create_text(250, 250, text="YOU WON !!", fill="yellow", font="Consolas 24 ")
                        root.update_idletasks()
                        root.update()
                        playing = False
                        break
		else:
                    canvas.create_text(250, 250, text="GAME OVER!!", fill="red", font="Consolas 24 ")
                    root.update_idletasks()
                    root.update()
                    playing = False
                    break