create table obsmedaf
(
  obmevisn    varchar2(8) default ' ' not null,
  obmecntr    varchar2(3) default ' ' not null,
  obmedrug    varchar2(70) default ' ' not null,
  obmedosf    varchar2(3) default ' ' not null,
  obmedose    varchar2(40) default ' ' not null,
  obmefreq    varchar2(3) default ' ' not null,
  obmedura    varchar2(20) default ' ' not null,
  obmequan    varchar2(6) default ' ' not null,
  obmeinst    varchar2(200) default ' ' not null,
  obmemcod    varchar2(9) default ' ' not null,
  obmereas    varchar2(3) default ' ' not null,
  obmestat    varchar2(3) default ' ' not null,
  obmechgd    varchar2(80) default ' ' not null,
  obmechgr    varchar2(3) default ' ' not null,
  obmenote    varchar2(80) default ' ' not null,
  obmescdt    varchar2(8) default ' ' not null,
  obmedrbr    varchar2(40) default ' ' not null,
  obmespar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obsmeda1 primary key( 
obmevisn,
obmecntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
