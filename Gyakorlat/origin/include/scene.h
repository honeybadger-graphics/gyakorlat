#ifndef SCENE_H
#define SCENE_H

#include "camera.h"

typedef struct Scene
{
    // NOTE: Place for model structures and texture ids.
} Scene;

/**
 * Initialize the scene.
 */
void init_scene(Scene* scene);

/**
 * Draw the scene objects.
 */
void draw_scene(const Scene* scene);

/**
 * Draw the origin of the world coordinate system.
 */
void draw_origin();
/**
 * Draw the origin of the world coordinate system.
 */
void draw_triangle();
void draw_sphere();
void draw_cone();
void draw_cylinder();
void draw_chesstable();

#endif /* SCENE_H */

