create table oprscraf
(
  opsckey     varchar2(8) default ' ' not null,
  dopscfld    varchar2(2) default ' ' not null,
  opscdrow    number(2,0) default 0 not null,
  opscdcol    number(2,0) default 0 not null,
  opsckrow    number(2,0) default 0 not null,
  opsckcol    number(2,0) default 0 not null,
  opscvarn    number(2,0) default 0 not null,
  opscdesc    varchar2(20) default ' ' not null,
  opscdsiz    number(2,0) default 0 not null,
  opscsize    number(2,0) default 0 not null,
  opscdsrw    number(2,0) default 0 not null,
  opscdscl    number(2,0) default 0 not null,
  opscmand    number(1,0) default 0 not null,
  opscspar    varchar2(28) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprscra1 primary key( 
opsckey,
dopscfld)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
