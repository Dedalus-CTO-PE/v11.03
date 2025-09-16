create table allgroaf
(
  algrsesn    varchar2(8) default ' ' not null,
  algrname    varchar2(60) default ' ' not null,
  algrsest    varchar2(3) default ' ' not null,
  algrlocn    varchar2(3) default ' ' not null,
  algrdayi    varchar2(1) default ' ' not null,
  algrsdat    varchar2(8) default ' ' not null,
  algrstim    varchar2(8) default ' ' not null,
  algrdurn    varchar2(3) default ' ' not null,
  algrdept    varchar2(3) default ' ' not null,
  algrfreq    varchar2(3) default ' ' not null,
  algractv    varchar2(1) default ' ' not null,
  algrcdat    varchar2(8) default ' ' not null,
  algrctim    varchar2(8) default ' ' not null,
  algrcuid    varchar2(10) default ' ' not null,
  algrudat    varchar2(8) default ' ' not null,
  algrutim    varchar2(8) default ' ' not null,
  algruuid    varchar2(10) default ' ' not null,
  algrcont    varchar2(3) default ' ' not null,
  algrudf1    varchar2(3) default ' ' not null,
  algrudf2    varchar2(3) default ' ' not null,
  algrudf3    varchar2(3) default ' ' not null,
  algrudf4    varchar2(3) default ' ' not null,
  algrspar    varchar2(35) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allgroa1 primary key( 
algrsesn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
