create table patureaf
(
pturinvn    varchar2(8),
pturvisn    varchar2(8),
pturstat    varchar2(1),
ptursyst    varchar2(1),
pturclmn    varchar2(3),
pturhfnd    varchar2(6),
pturhtab    varchar2(8),
pturinvt    number(14,2),
pturpaym    number(14,2),
pturjrnl    number(14,2),
pturostd    number(14,2),
pturcdat    varchar2(8),
pturctim    varchar2(8),
pturcuid    varchar2(10),
pturudat    varchar2(8),
pturutim    varchar2(8),
pturuuid    varchar2(10),
pturspar    varchar2(100),
lf          varchar2(1),
constraint paturea1 primary key( 
pturinvn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym patureaf for patureaf;
create unique index paturea2 on patureaf
(
pturudat,
pturutim,
pturinvn
)
  tablespace pas_indx; 
