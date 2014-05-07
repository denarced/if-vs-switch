import os
import shutil

rootEnv = Environment(CFLAGS = ['-Wall', '-std=c11'])
environments = []
for flags in [['-O2'], ['-g']]:
    env = rootEnv.Clone()
    env.Append(CFLAGS = flags)
    environments.append(env)
directories = ["release", "debug"]

buildDir = 'bin'
for env, dir in zip(environments, directories):
    SConscript(
        'src/SConscript', 
        variant_dir=os.path.join(buildDir, dir),
        exports={'env': env},
        duplicate=False)
Clean('.', buildDir)
