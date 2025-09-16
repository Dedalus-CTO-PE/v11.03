create table hl7codaf
(
  hlcotid     varchar2(4) default ' ' not null,
  hlcocod     varchar2(10) default ' ' not null,
  hlcodes     varchar2(60) default ' ' not null,
  hlcocat     varchar2(2) default ' ' not null,
  hlcoicd     varchar2(3) default ' ' not null,
  hlcobgc     varchar2(7) default ' ' not null,
  hlcospa     varchar2(53) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7coda1 primary key( 
hlcotid,
hlcocod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
