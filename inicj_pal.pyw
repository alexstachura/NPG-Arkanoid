#funcja_inicjalizacyjna_paletki
    def __init__(self, canvas, color):
        self.canvas = canvas
        self.id = canvas.create_rectangle(0, 0, 100, 10, fill=color)
        self.canvas.move(self.id, 200, 485)
        self.x = 0
        self.pausec=0
        self.canvas_width = canvas.winfo_width()
        self.canvas.bind_all("<Left>", self.turn_left)
        self.canvas.bind_all("<Right>", self.turn_right)
        self.canvas.bind_all("<space>", self.pauser)
