create table pmsuhlaf
(
  pmultype    char(1) default ' ' not null,
  pmulwdcd    char(3) default ' ' not null,
  pmulbdcd    char(3) default ' ' not null,
  pmuluhid    char(20) default ' ' not null,
  pmulspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index pmsuhla1 on pmsuhlaf
(
pmultype,
pmulwdcd,
pmulbdcd
);
create unique index pmsuhla2 on pmsuhlaf
(
pmuluhid,
pmultype,
pmulwdcd,
pmulbdcd
);
revoke all on pmsuhlaf from public ; 
grant select on pmsuhlaf to public ; 
