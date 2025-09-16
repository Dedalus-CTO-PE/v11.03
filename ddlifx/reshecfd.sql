create table reshecaf
(
rehcrdt     char(8),
rehcrtm     char(5),
rehcrun     char(4),
rehccno     char(2),
rehccto     char(127),
rehcspa     char(10),
lf          char(1)
);
create unique index resheca1 on reshecaf
(
rehcrdt,
rehcrtm,
rehcrun,
rehccno
);
revoke all on reshecaf from public ; 
grant select on reshecaf to public ; 
