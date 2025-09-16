create table allcctaf
(
  alccdept    varchar2(3) default ' ' not null,
  alcccont    varchar2(3) default ' ' not null,
  alcccdat    varchar2(8) default ' ' not null,
  alccctim    varchar2(8) default ' ' not null,
  alcccuid    varchar2(10) default ' ' not null,
  alccudat    varchar2(8) default ' ' not null,
  alccutim    varchar2(8) default ' ' not null,
  alccuuid    varchar2(10) default ' ' not null,
  alccspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allccta1 primary key( 
alccdept,
alcccont)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
