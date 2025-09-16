create table patre1af
(
  dpkadmn     varchar2(8) default ' ' not null,
  pkname      varchar2(80) default ' ' not null,
  pkadd1      varchar2(35) default ' ' not null,
  pkadd2      varchar2(35) default ' ' not null,
  pksubr      varchar2(35) default ' ' not null,
  pkadd4      varchar2(35) default ' ' not null,
  pkpost      varchar2(8) default ' ' not null,
  pktelep     varchar2(20) default ' ' not null,
  pkteleb     varchar2(20) default ' ' not null,
  pkrelp      varchar2(10) default ' ' not null,
  ptremobl    varchar2(20) default ' ' not null,
  ptresnam    varchar2(40) default ' ' not null,
  ptregnam    varchar2(40) default ' ' not null,
  ptrespar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patre1a1 primary key( 
dpkadmn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
