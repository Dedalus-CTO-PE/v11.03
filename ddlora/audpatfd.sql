create table audpataf
(
  aupaunq     varchar2(20) default ' ' not null,
  aupaurn     varchar2(8) default ' ' not null,
  aupavis     varchar2(8) default ' ' not null,
  aupadat     varchar2(8) default ' ' not null,
  aupatim     varchar2(8) default ' ' not null,
  aupaosu     varchar2(30) default ' ' not null,
  aupadbu     varchar2(30) default ' ' not null,
  aupamod     varchar2(48) default ' ' not null,
  aupaact     varchar2(32) default ' ' not null,
  aupacli     varchar2(64) default ' ' not null,
  aupauid     varchar2(10) default ' ' not null,
  aupaprg     varchar2(8) default ' ' not null,
  aupaver     varchar2(10) default ' ' not null,
  aupades     varchar2(50) default ' ' not null,
  aupaold     varchar2(255) default ' ' not null,
  aupanew     varchar2(255) default ' ' not null,
  aupaspa     varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint audpata1 primary key( 
aupaunq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index audpata2 on audpataf
(
aupaurn,
aupadat,
aupatim,
aupaunq
)
  tablespace pas_indx; 
create unique index audpata3 on audpataf
(
aupavis,
aupadat,
aupatim,
aupaunq
)
  tablespace pas_indx; 
create unique index audpata4 on audpataf
(
aupacli,
aupadat,
aupatim,
aupaunq
)
  tablespace pas_indx; 
create unique index audpata5 on audpataf
(
aupaprg,
aupadat,
aupatim,
aupaunq
)
  tablespace pas_indx; 
