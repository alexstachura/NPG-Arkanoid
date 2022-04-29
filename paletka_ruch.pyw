#funkcja_ruchu_paletki
    def draw(self):
        pos = self.canvas.coords(self.id)

        if pos[0] + self.x <= 0:
            self.x = 0
        if pos[2] + self.x >= self.canvas_width:
            self.x = 0
        self.canvas.move(self.id, self.x, 0)