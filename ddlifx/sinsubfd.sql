create table sinsubaf
(
sisbsub     char(5),
sisbdat     char(6),
sisbuam     decimal(14,2),
sisbubd     decimal(14,2),
sisbpam     decimal(14,2),
sisbpbd     decimal(14,2),
sisbram     decimal(14,2),
sisbrbd     decimal(14,2),
sisbspa     char(18),
lf          char(1)
);
create unique index sinsuba1 on sinsubaf
(
sisbsub,
sisbdat
);
revoke all on sinsubaf from public ; 
grant select on sinsubaf to public ; 
