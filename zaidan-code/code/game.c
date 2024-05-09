
/*
TODO:

(OK) Initial platform layer (window, rendering, input, time)
Initial Gameplay Exploration
Engine improvements (audio, threading, bitmap)
More Gameplay Exploration
Polish pass (engine and game)

*/


v2 player_p;

internal void
simulate_game(Input *input, f32 dt) {
    
    f32 speed = 100;
    
    if (is_down(BUTTON_LEFT)) player_p.x -= speed*dt;
    if (is_down(BUTTON_RIGHT)) player_p.x += speed*dt;
    if (is_down(BUTTON_DOWN)) player_p.y -= speed*dt;
    if (is_down(BUTTON_UP)) player_p.y += speed*dt;
    
    clear_screen(0x551100);

    v2 mouse_world = pixels_to_world(input->mouse);

    draw_rect(mouse_world, (v2){1, 1}, 0xff0000);
    draw_rect(player_p, (v2){1, 1}, 0x00ff00);
    
}