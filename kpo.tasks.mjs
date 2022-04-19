export default ({ exec }) => ({
  'build:e5': exec('pio', ['run', '-e', 'melzi_optiboot_optimized'], {
    cwd: 'ender-5'
  }),
  'build:b1': exec('pio', ['run', '-e', 'BIGTREE_SKR_2'], {
    cwd: 'b1-se'
  })
});
