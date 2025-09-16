create table pmsbevaf
(
  pmbeuniq    char(10) default ' ' not null,
  pmbebunq    char(10) default ' ' not null,
  pmbeedat    char(8) default ' ' not null,
  pmbeetim    char(8) default ' ' not null,
  pmbetype    char(3) default ' ' not null,
  pmbeetyp    char(3) default ' ' not null,
  pmbeesta    char(3) default ' ' not null,
  pmbedes1    char(50) default ' ' not null,
  pmbedes2    char(50) default ' ' not null,
  pmbewebc    char(10) default ' ' not null,
  pmbedatc    char(8) default ' ' not null,
  pmbetimc    char(8) default ' ' not null,
  pmbewebu    char(10) default ' ' not null,
  pmbedatu    char(8) default ' ' not null,
  pmbetimu    char(8) default ' ' not null,
  pmberecs    char(1) default ' ' not null,
  pmbewebd    char(8) default ' ' not null,
  pmbedatd    char(8) default ' ' not null,
  pmbetimd    char(8) default ' ' not null,
  pmbespar    char(60) default ' ' not null,
  lf          char(1)
);
create unique index pmsbeva1 on pmsbevaf
(
pmbeuniq,
pmbebunq,
pmbeedat,
pmbeetim,
pmbetype,
pmbeetyp
);
revoke all on pmsbevaf from public ; 
grant select on pmsbevaf to public ; 
