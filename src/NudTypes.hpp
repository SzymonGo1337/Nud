#pragma once
#ifndef NUD_TYPES_HEADER
#define NUD_TYPES_HEADER

#include "Nud.hpp"

using nudint = int;
using nuduint = uint32_t;
using nudfloat = float;
using nudlong = long;
using nudchar = char;
using nudbool = bool;
typedef void (*nudvoid)(void);

namespace nud {
    struct vec2 {
        float x, y;
        vec2() : x(0.0f), y(0.0f) {}
        vec2(float m_x, float m_y) : x(m_x), y(m_y) {}

        void multiply(float m_x, float m_y) {
            x *= m_x;
            y *= m_y;
        }

        void split(float m_x, float m_y) {
            x /= m_x;
            y /= m_y;
        }

        void plus(float m_x, float m_y) {
            x += m_x;
            y += m_y;
        }

        void minus(float m_x, float m_y) {
            x -= m_x;
            y -= m_y;
        }
    };

    struct vec3 {
        float x, y, z;
        vec3() : x(0.0f), y(0.0f), z(0.0f) {}
        vec3(float m_x, float m_y, float m_z) : x(m_x), y(m_y), z(m_z) {}

        void multiply(float m_x, float m_y, float m_z) {
            x *= m_x;
            y *= m_y;
            z *= m_z;
        }

        void split(float m_x, float m_y, float m_z) {
            x /= m_x;
            y /= m_y;
            z /= m_z;
        }

        void plus(float m_x, float m_y, float m_z) {
            x += m_x;
            y += m_y;
            z += m_z;
        }

        void minus(float m_x, float m_y, float m_z) {
            x -= m_x;
            y -= m_y;
            z -= m_z;
        }
    };

    struct vec4 {
        float x, y, z, w;
        vec4() : x(0.0f), y(0.0f), z(0.0f), w(0.0f) {}
        vec4(float m_x, float m_y, float m_z, float m_w) : x(m_x), y(m_y), z(m_z), w(m_w) {}

        void multiply(float m_x, float m_y, float m_z, float m_w) {
            x *= m_x;
            y *= m_y;
            z *= m_z;
            w *= m_w;
        }

        void split(float m_x, float m_y, float m_z, float m_w) {
            x /= m_x;
            y /= m_y;
            z /= m_z;
            w /= m_w;
        }

        void plus(float m_x, float m_y, float m_z, float m_w) {
            x += m_x;
            y += m_y;
            z += m_z;
            w += m_w;
        }

        void minus(float m_x, float m_y, float m_z, float m_w) {
            x -= m_x;
            y -= m_y;
            z -= m_z;
            w -= m_w;
        }
    };

    struct string {
        std::string data;

        string() : data("") {}
        string(std::string m_data) : data(m_data) {}

        void push(std::string m_data) {
            data += m_data;
        }

        const char* chars() {
            return data.c_str();
        }
    };
};

#endif