#funkcja_oblugująca_uderzenie_klocka_przez_paletke
    def brick_hit(self, pos):
        for brick_line in self.bricks:
            for brick in brick_line:
                brick_pos = self.canvas.coords(brick.id)