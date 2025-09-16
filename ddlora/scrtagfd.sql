create table scrtagaf
(
  sctapid     varchar2(8) default ' ' not null,
  sctasid     varchar2(2) default ' ' not null,
  sctafno     varchar2(5) default ' ' not null,
  sctacbd     varchar2(8) default ' ' not null,
  sctacad     varchar2(8) default ' ' not null,
  sctacbk     varchar2(8) default ' ' not null,
  sctacak     varchar2(8) default ' ' not null,
  sctaspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint scrtaga1 primary key( 
sctapid,
sctasid,
sctafno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
