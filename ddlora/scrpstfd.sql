create table scrpstaf
(
  scpspid     varchar2(8) default ' ' not null,
  scpssid     varchar2(2) default ' ' not null,
  scpsrow     varchar2(2) default ' ' not null,
  scpscol     varchar2(3) default ' ' not null,
  scpsitm     varchar2(5) default ' ' not null,
  scpslen     number(3,0) default 0 not null,
  scpsman     number(1,0) default 0 not null,
  scpsatt     varchar2(1) default ' ' not null,
  scpsnor     number(2,0) default 0 not null,
  scpsmty     varchar2(5) default ' ' not null,
  scpsfmt     varchar2(25) default ' ' not null,
  scpsspa     varchar2(5) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint scrpsta1 primary key( 
scpspid,
scpssid,
scpsrow,
scpscol)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index scrpsta2 on scrpstaf
(
scpspid,
scpssid,
scpsitm,
scpsrow,
scpscol
)
  tablespace pas_indx; 
