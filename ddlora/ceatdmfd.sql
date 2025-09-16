create table ceatdmaf
(
  cetddty     varchar2(3) default ' ' not null,
  cetdspc     varchar2(3) default ' ' not null,
  cetdpsc     varchar2(7) default ' ' not null,
  cetdstm     number(2,0) default 0 not null,
  cetdetm     number(2,0) default 0 not null,
  cetdspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceatdma1 primary key( 
cetddty,
cetdspc,
cetdpsc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
