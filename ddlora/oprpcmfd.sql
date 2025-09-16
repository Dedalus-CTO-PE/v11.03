create table oprpcmaf
(
  oppccode    varchar2(6) default ' ' not null,
  oppcpref    varchar2(9) default ' ' not null,
  oppcclss    varchar2(3) default ' ' not null,
  doppclin    varchar2(3) default ' ' not null,
  oppcdesc    varchar2(70) default ' ' not null,
  oppchosp    varchar2(3) default ' ' not null,
  oppcspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprpcma1 primary key( 
oppccode,
oppcpref,
oppcclss,
doppclin,
oppchosp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
