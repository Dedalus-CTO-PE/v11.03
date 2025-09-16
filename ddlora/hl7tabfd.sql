create table hl7tabaf
(
  hltatid     varchar2(4) default ' ' not null,
  hltades     varchar2(40) default ' ' not null,
  hltaspa     varchar2(60) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7taba1 primary key( 
hltatid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
