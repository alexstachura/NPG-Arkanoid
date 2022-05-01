#funkcja_oblugująca_uderzenie_klocka_przez_paletke
    def brick_hit(self, pos):
        for brick_line in self.bricks:
            for brick in brick_line:
                brick_pos = self.canvas.coords(brick.id)

		try:
                    if pos[2] >= brick_pos[0] and pos[0] <= brick_pos[2]:
                        if pos[3] >= brick_pos[1] and pos[1] <= brick_pos[3]:
                            canvas.bell()
                            self.hit += 1
                            self.score.configure(text="Score: " + str(self.hit))
                            self.canvas.delete(brick.id)
                            return True
                except:
                    continue
        return False