create table patexcnn
(
  dptxcadm    varchar2(8) default ' ' not null,
  ptxctype    varchar2(1) default ' ' not null,
  dptxcunq    varchar2(3) default ' ' not null,
  ptxcctyp    varchar2(1) default ' ' not null,
  ptxccode    varchar2(9) default ' ' not null,
  ptxcdate    varchar2(8) default ' ' not null,
  ptxcopco    number(14,2) default 0 not null,
  ptxcmadc    varchar2(6) default ' ' not null,
  ptxcmadt    varchar2(3) default ' ' not null,
  ptxcmwrd    varchar2(3) default ' ' not null,
  ptxcmbed    varchar2(3) default ' ' not null,
  ptxcspar    varchar2(16) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patextc1 primary key( 
dptxcadm,
ptxctype,
dptxcunq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
