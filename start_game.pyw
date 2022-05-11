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