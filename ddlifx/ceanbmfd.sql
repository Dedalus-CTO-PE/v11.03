create table ceanbmaf
(
  cenbaty     char(3) default ' ' not null,
  cenbwrd     char(3) default ' ' not null,
  cenbfc1     decimal(10,4) default 0 not null,
  cenbfc2     decimal(10,4) default 0 not null,
  cenbfc3     decimal(10,4) default 0 not null,
  cenbfc4     decimal(10,4) default 0 not null,
  cenbfc5     decimal(10,4) default 0 not null,
  cenbspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceanbma1 on ceanbmaf
(
cenbaty,
cenbwrd
);
create unique index ceanbma2 on ceanbmaf
(
cenbwrd,
cenbaty
);
revoke all on ceanbmaf from public ; 
grant select on ceanbmaf to public ; 
