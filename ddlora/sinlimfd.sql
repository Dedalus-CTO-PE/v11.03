create table sinlimaf
(
  silicst     varchar2(5) default ' ' not null,
  silisup     varchar2(5) default ' ' not null,
  silicat     varchar2(7) default ' ' not null,
  siliqty     number(6,0) default 0 not null,
  silisut     varchar2(15) default ' ' not null,
  silisub     varchar2(5) default ' ' not null,
  silipd      varchar2(30) default ' ' not null,
  silipn      varchar2(30) default ' ' not null,
  silicon     varchar2(10) default ' ' not null,
  silicdt     varchar2(8) default ' ' not null,
  siliedt     varchar2(8) default ' ' not null,
  siliect     number(16,4) default 0 not null,
  silispa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinlima1 primary key( 
silicst,
silisup,
silicat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
