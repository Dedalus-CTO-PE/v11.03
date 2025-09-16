create table tmpaliaf
(
  tmalurno    varchar2(8) default ' ' not null,
  tmallin     varchar2(3) default ' ' not null,
  tmalsur     varchar2(25) default ' ' not null,
  tmalgv1     varchar2(20) default ' ' not null,
  tmalgv2     varchar2(20) default ' ' not null,
  tmalgv3     varchar2(20) default ' ' not null,
  tmalpre     varchar2(1) default ' ' not null,
  tmalspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint tmpalia1 primary key( 
tmalurno,
tmallin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
