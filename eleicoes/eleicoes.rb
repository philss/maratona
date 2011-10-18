#!/bin/env ruby
count = {}
winner = 0
winner_points = 0
size = gets.to_i
if size > 0 and size <= 100000
  size.times do
    vote = gets.to_i
    if vote > 0 and vote <= 1000000000
      if count[vote] == nil
        count[vote] = 1
      else
        count[vote] += 1
      end
      if count[vote] > winner_points
        winner = vote
        winner_points = count[vote]
      end
    end
  end
end
puts winner
