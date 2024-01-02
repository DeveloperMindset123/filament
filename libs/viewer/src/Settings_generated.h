// This file has been generated by beamsplitter

#include <filament/Options.h>

#include <ostream>

#define JSMN_HEADER

#include <jsmn.h>

namespace filament::viewer {

int compare(jsmntok_t tok, const char* jsonChunk, const char* str);

std::ostream& writeJson(std::ostream& oss, const float* v, int count);
std::ostream& operator<<(std::ostream& out, math::float2 v);
std::ostream& operator<<(std::ostream& out, math::float3 v);
std::ostream& operator<<(std::ostream& out, math::float4 v);

const char* to_string(bool b);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, uint8_t* val);
int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, uint16_t* val);
int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, uint32_t* val);
int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, int* val);
int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, float* val);
int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, float* vals, int size);
int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, bool* val);
int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, math::float2* val);
int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, math::float3* val);
int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, math::float4* val);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, QualityLevel* out);
std::ostream& operator<<(std::ostream& out, QualityLevel in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, BlendMode* out);
std::ostream& operator<<(std::ostream& out, BlendMode in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, DynamicResolutionOptions* out);
std::ostream& operator<<(std::ostream& out, const DynamicResolutionOptions& in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, BloomOptions::BlendMode* out);
std::ostream& operator<<(std::ostream& out, BloomOptions::BlendMode in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, BloomOptions* out);
std::ostream& operator<<(std::ostream& out, const BloomOptions& in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, FogOptions* out);
std::ostream& operator<<(std::ostream& out, const FogOptions& in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, DepthOfFieldOptions::Filter* out);
std::ostream& operator<<(std::ostream& out, DepthOfFieldOptions::Filter in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, DepthOfFieldOptions* out);
std::ostream& operator<<(std::ostream& out, const DepthOfFieldOptions& in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, VignetteOptions* out);
std::ostream& operator<<(std::ostream& out, const VignetteOptions& in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, RenderQuality* out);
std::ostream& operator<<(std::ostream& out, const RenderQuality& in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, AmbientOcclusionOptions::Ssct* out);
std::ostream& operator<<(std::ostream& out, const AmbientOcclusionOptions::Ssct& in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, AmbientOcclusionOptions* out);
std::ostream& operator<<(std::ostream& out, const AmbientOcclusionOptions& in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, MultiSampleAntiAliasingOptions* out);
std::ostream& operator<<(std::ostream& out, const MultiSampleAntiAliasingOptions& in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, TemporalAntiAliasingOptions::BoxType* out);
std::ostream& operator<<(std::ostream& out, TemporalAntiAliasingOptions::BoxType in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, TemporalAntiAliasingOptions::BoxClipping* out);
std::ostream& operator<<(std::ostream& out, TemporalAntiAliasingOptions::BoxClipping in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, TemporalAntiAliasingOptions* out);
std::ostream& operator<<(std::ostream& out, const TemporalAntiAliasingOptions& in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, ScreenSpaceReflectionsOptions* out);
std::ostream& operator<<(std::ostream& out, const ScreenSpaceReflectionsOptions& in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, GuardBandOptions* out);
std::ostream& operator<<(std::ostream& out, const GuardBandOptions& in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, AntiAliasing* out);
std::ostream& operator<<(std::ostream& out, AntiAliasing in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, Dithering* out);
std::ostream& operator<<(std::ostream& out, Dithering in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, ShadowType* out);
std::ostream& operator<<(std::ostream& out, ShadowType in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, VsmShadowOptions* out);
std::ostream& operator<<(std::ostream& out, const VsmShadowOptions& in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, SoftShadowOptions* out);
std::ostream& operator<<(std::ostream& out, const SoftShadowOptions& in);

int parse(jsmntok_t const* tokens, int i, const char* jsonChunk, StereoscopicOptions* out);
std::ostream& operator<<(std::ostream& out, const StereoscopicOptions& in);

} // namespace filament::viewer
