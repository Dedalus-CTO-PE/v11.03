create table hl7p6baf
(
  hl6brsid    varchar2(64) default ' ' not null,
  hl6bvrid    varchar2(10) default ' ' not null,
  hl6bcnt1    varchar2(4) default ' ' not null,
  hl6bcnt2    varchar2(4) default ' ' not null,
  hl6bcgen    varchar2(50) default ' ' not null,
  hl6boref    varchar2(200) default ' ' not null,
  hl6botyp    varchar2(255) default ' ' not null,
  hl6bodsp    varchar2(200) default ' ' not null,
  hl6boius    varchar2(50) default ' ' not null,
  hl6boisy    varchar2(255) default ' ' not null,
  hl6boiva    varchar2(200) default ' ' not null,
  hl6boitt    varchar2(200) default ' ' not null,
  hl6boits    varchar2(255) default ' ' not null,
  hl6boitv    varchar2(200) default ' ' not null,
  hl6boitc    varchar2(50) default ' ' not null,
  hl6boitd    varchar2(200) default ' ' not null,
  hl6boitu    varchar2(10) default ' ' not null,
  hl6boist    varchar2(40) default ' ' not null,
  hl6boien    varchar2(40) default ' ' not null,
  hl6bcstr    varchar2(40) default ' ' not null,
  hl6bcend    varchar2(40) default ' ' not null,
  hl6bspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7p6ba1 primary key( 
hl6brsid,
hl6bvrid,
hl6bcnt1,
hl6bcnt2)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
