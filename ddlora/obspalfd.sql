create table obspalaf
(
  obpaurn     varchar2(8) default ' ' not null,
  obpauni     varchar2(4) default ' ' not null,
  obpadte     varchar2(8) default ' ' not null,
  obpausr     varchar2(10) default ' ' not null,
  obpaalt     varchar2(10) default ' ' not null,
  obpaalv     varchar2(1) default ' ' not null,
  obpaslv     varchar2(2) default ' ' not null,
  obpaiac     varchar2(1) default ' ' not null,
  obpaidt     varchar2(8) default ' ' not null,
  obpaius     varchar2(10) default ' ' not null,
  obpacm1     varchar2(50) default ' ' not null,
  obpacm2     varchar2(50) default ' ' not null,
  obpalus     varchar2(10) default ' ' not null,
  obpaldt     varchar2(8) default ' ' not null,
  obpaltm     varchar2(8) default ' ' not null,
  obparf1     varchar2(20) default ' ' not null,
  obparf2     varchar2(20) default ' ' not null,
  obpayn1     varchar2(1) default ' ' not null,
  obpayn2     varchar2(1) default ' ' not null,
  obpaspa     varchar2(1) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obspala1 primary key( 
obpaurn,
obpauni)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index obspala2 on obspalaf
(
obpaurn,
obpaalv,
obpadte,
obpauni
)
  tablespace pas_indx; 
