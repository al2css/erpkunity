#pragma once

namespace il2cpp
{
namespace utils
{
    class HashUtils
    {
        static const size_t Seed = 486187739;
    public:
        static inline size_t Combine(size_t hash1, size_t hash2)
        {
            return hash1 * Seed + hash2;
        }
    };

    template<class T>
    struct PointerHash
    {
        size_t operator()(T *value) const
        {
            return (size_t)value;
        }
    };
} /* namespace vm */
} /* namespace il2cpp */
