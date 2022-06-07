#klasa opisująca działkanie piłki
class Ball:
	#funkcja_inicjalizacyjna_pilki
	def __init__(self, canvas, color, paddle, bricks, score):
		self.bricks = bricks
		self.canvas = canvas
		self.paddle = paddle
		self.score = score
		self.bottom_hit = False
		self.hit = 0
		self.id = canvas.create_oval(10, 10, 25, 25, fill=color, width=1)
		self.canvas.move(self.id, 230, 461)
		start = [4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6]
		random.shuffle(start)

		self.x = start[0]
		self.y = -start[0]
		self.canvas.move(self.id, self.x, self.y)
		self.canvas_height = canvas.winfo_height()
		self.canvas_width = canvas.winfo_width()
