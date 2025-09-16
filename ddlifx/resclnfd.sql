create table resclnaf
(
  reclrdt     char(8) default ' ' not null,
  reclrtm     char(5) default ' ' not null,
  reclrun     char(4) default ' ' not null,
  recllno     char(3) default ' ' not null,
  reclurn     char(8) default ' ' not null,
  reclvis     char(8) default ' ' not null,
  reclcid     char(4) default ' ' not null,
  recldel     char(1) default ' ' not null,
  reclspa     char(59) default ' ' not null,
  lf          char(1)
);
create unique index resclna1 on resclnaf
(
reclrdt,
reclrtm,
reclrun,
recllno
);
create unique index resclna2 on resclnaf
(
reclurn,
reclrdt,
reclrtm,
reclrun,
recllno
);
create unique index resclna3 on resclnaf
(
reclurn,
reclvis,
reclcid,
reclrdt,
reclrtm,
reclrun,
recllno
);
revoke all on resclnaf from public ; 
grant select on resclnaf to public ; 
