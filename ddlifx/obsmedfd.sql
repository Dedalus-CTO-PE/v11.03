create table obsmedaf
(
  obmevisn    char(8) default ' ' not null,
  obmecntr    char(3) default ' ' not null,
  obmedrug    char(70) default ' ' not null,
  obmedosf    char(3) default ' ' not null,
  obmedose    char(40) default ' ' not null,
  obmefreq    char(3) default ' ' not null,
  obmedura    char(20) default ' ' not null,
  obmequan    char(6) default ' ' not null,
  obmeinst    char(200) default ' ' not null,
  obmemcod    char(9) default ' ' not null,
  obmereas    char(3) default ' ' not null,
  obmestat    char(3) default ' ' not null,
  obmechgd    char(80) default ' ' not null,
  obmechgr    char(3) default ' ' not null,
  obmenote    char(80) default ' ' not null,
  obmescdt    char(8) default ' ' not null,
  obmedrbr    char(40) default ' ' not null,
  obmespar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index obsmeda1 on obsmedaf
(
obmevisn,
obmecntr
);
revoke all on obsmedaf from public ; 
grant select on obsmedaf to public ; 
