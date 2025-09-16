create table patnursm
(
  nstat       varchar2(3) default ' ' not null,
  nward       varchar2(3) default ' ' not null,
  nsdesc      varchar2(30) default ' ' not null,
  nsist       varchar2(30) default ' ' not null,
  nsextn      varchar2(20) default ' ' not null,
  nsspare     varchar2(41) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patnurs1 primary key( 
nstat,
nward)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
