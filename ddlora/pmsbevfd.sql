create table pmsbevaf
(
  pmbeuniq    varchar2(10) default ' ' not null,
  pmbebunq    varchar2(10) default ' ' not null,
  pmbeedat    varchar2(8) default ' ' not null,
  pmbeetim    varchar2(8) default ' ' not null,
  pmbetype    varchar2(3) default ' ' not null,
  pmbeetyp    varchar2(3) default ' ' not null,
  pmbeesta    varchar2(3) default ' ' not null,
  pmbedes1    varchar2(50) default ' ' not null,
  pmbedes2    varchar2(50) default ' ' not null,
  pmbewebc    varchar2(10) default ' ' not null,
  pmbedatc    varchar2(8) default ' ' not null,
  pmbetimc    varchar2(8) default ' ' not null,
  pmbewebu    varchar2(10) default ' ' not null,
  pmbedatu    varchar2(8) default ' ' not null,
  pmbetimu    varchar2(8) default ' ' not null,
  pmberecs    varchar2(1) default ' ' not null,
  pmbewebd    varchar2(8) default ' ' not null,
  pmbedatd    varchar2(8) default ' ' not null,
  pmbetimd    varchar2(8) default ' ' not null,
  pmbespar    varchar2(60) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsbeva1 primary key( 
pmbeuniq,
pmbebunq,
pmbeedat,
pmbeetim,
pmbetype,
pmbeetyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
