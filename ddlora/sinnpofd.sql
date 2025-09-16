create table sinnpoaf
(
  sinpcst     varchar2(5) default ' ' not null,
  sinpsup     varchar2(5) default ' ' not null,
  sinpcat     varchar2(7) default ' ' not null,
  sinpqty     number(6,0) default 0 not null,
  sinpsut     varchar2(15) default ' ' not null,
  sinpsub     varchar2(5) default ' ' not null,
  sinppd      varchar2(30) default ' ' not null,
  sinppn      varchar2(30) default ' ' not null,
  sinpcon     varchar2(10) default ' ' not null,
  sinpcdt     varchar2(8) default ' ' not null,
  sinpedt     varchar2(8) default ' ' not null,
  sinpect     number(16,4) default 0 not null,
  sinpgsta    number(16,4) default 0 not null,
  sinpgst     varchar2(6) default ' ' not null,
  sinpspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinnpoa1 primary key( 
sinpcst,
sinpsup,
sinpcat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
