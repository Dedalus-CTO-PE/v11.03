create table patletrf
(
  dptlelno    char(3) default ' ' not null,
  dptlelin    char(3) default ' ' not null,
  ptletext    char(70) default ' ' not null,
  ptlelvar    decimal(1,0) default 0 not null,
  ptlepbot    decimal(2,0) default 0 not null,
  ptleptop    decimal(2,0) default 0 not null,
  ptleppag    decimal(3,0) default 0 not null,
  ptleptab    decimal(2,0) default 0 not null,
  ptlemmfn    char(8) default ' ' not null,
  ptleactv    char(1) default ' ' not null,
  ptlecomm    char(1) default ' ' not null,
  ptleconf    char(1) default ' ' not null,
  ptlespar    char(1) default ' ' not null,
  lf          char(1)
);
create unique index patletr1 on patletrf
(
dptlelno,
dptlelin
);
create unique index patletr2 on patletrf
(
dptlelin,
dptlelno
);
revoke all on patletrf from public ; 
grant select on patletrf to public ; 
