create table mehptfaf
(
  mhpfxdat    varchar2(8) default ' ' not null,
  mhpfxnum    varchar2(3) default ' ' not null,
  mhpfsorg    varchar2(8) default ' ' not null,
  mhpfstat    varchar2(1) default ' ' not null,
  mhpffdat    varchar2(8) default ' ' not null,
  mhpftdat    varchar2(8) default ' ' not null,
  mhpfrdno    varchar2(5) default ' ' not null,
  mhpfrder    varchar2(5) default ' ' not null,
  mhpfrdwn    varchar2(5) default ' ' not null,
  mhpflsno    varchar2(5) default ' ' not null,
  mhpflser    varchar2(5) default ' ' not null,
  mhpflswn    varchar2(5) default ' ' not null,
  mhpfspar    varchar2(33) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehptfa1 primary key( 
mhpfxdat,
mhpfxnum)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
