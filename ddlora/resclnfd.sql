create table resclnaf
(
  reclrdt     varchar2(8) default ' ' not null,
  reclrtm     varchar2(5) default ' ' not null,
  reclrun     varchar2(4) default ' ' not null,
  recllno     varchar2(3) default ' ' not null,
  reclurn     varchar2(8) default ' ' not null,
  reclvis     varchar2(8) default ' ' not null,
  reclcid     varchar2(4) default ' ' not null,
  recldel     varchar2(1) default ' ' not null,
  reclspa     varchar2(59) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint resclna1 primary key( 
reclrdt,
reclrtm,
reclrun,
recllno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index resclna2 on resclnaf
(
reclurn,
reclrdt,
reclrtm,
reclrun,
recllno
)
  tablespace pas_indx; 
create unique index resclna3 on resclnaf
(
reclurn,
reclvis,
reclcid,
reclrdt,
reclrtm,
reclrun,
recllno
)
  tablespace pas_indx; 
