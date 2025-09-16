create table patachaf
(
dptahadm    char(8),
ptahdate    char(8),
ptahanni    decimal(14,2),
ptahtotl    decimal(14,2),
ptahspar    char(10),
lf          char(1)
);
create unique index patacha1 on patachaf
(
dptahadm,
ptahdate
);
revoke all on patachaf from public ; 
grant select on patachaf to public ; 
