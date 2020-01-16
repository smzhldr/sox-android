cmake_minimum_required(VERSION 2.4)

set(effects_sources
        src/sox.h
        src/sox.c
        src/effects.h
        src/effects.c
#        src/bend.c
#        src/biquad.c
#        src/biquads.c
#        src/chorus.c
#        src/compand.c
#        src/compandt.c
#        src/contrast.c
#        src/dcshift.c
#        src/delay.c
#        src/dft_filter.c
#        src/dither.c
#        src/divide.c
#        src/downsample.c
#        src/earwax.c
#        src/echo.c
#        src/echos.c
#        src/fade.c
#        src/fft4g.c
#        src/fir.c
#        src/firfit.c
#        src/flanger.c
#        src/gain.c
#        src/hilbert.c
#        src/input.c
#        src/loudness.c
#        src/mcompand.c
#        src/noiseprof.c
#        src/noisered.c
#        src/output.c
#        src/overdrive.c
#        src/pad.c
#        src/phaser.c
#        src/rate.c
#        src/remix.c
#        src/repeat.c
#        src/reverb.c
#        src/reverse.c
#        src/silence.c
#        src/sinc.c
#        src/skeleff.c
#        src/speed.c
#        src/splice.c
#        src/stat.c
#        src/stats.c
#        src/stretch.c
#        src/swap.c
#        src/synth.c
#        src/tempo.c
#        src/tremolo.c
#        src/trim.c
#        src/upsample.c
#        src/vad.c
#        src/vol.c
        )

add_library(sox

        STATIC

        ${effects_sources} )

find_library( # Sets the name of the path variable.
        log-lib

        # Specifies the name of the NDK library that
        # you want CMake to locate.
        log)

target_link_libraries(sox ${log-lib})