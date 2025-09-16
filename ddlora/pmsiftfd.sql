create table pmsiftaf
(
pmifurno    varchar2(8),
pmifadmn    varchar2(8),
pmifvtyp    varchar2(2),
pmifcloc    varchar2(6),
pmificat    varchar2(2),
pmifityp    varchar2(3),
pmifiloc    varchar2(3),
pmifidte    varchar2(8),
pmifitim    varchar2(8),
pmiflvis    varchar2(2),
pmifdtis    varchar2(8),
pmiftmis    varchar2(8),
pmifdpnd    varchar2(3),
pmifltgp    varchar2(1),
pmifgvtn    varchar2(70),
pmifgvtc    varchar2(3),
pmifspar    varchar2(20),
lf          varchar2(1),
constraint pmsifta1 primary key( 
pmifadmn)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym pmsiftaf for pmsiftaf;
create unique index pmsifta2 on pmsiftaf
(
pmifurno,
pmifadmn
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index pmsifta3 on pmsiftaf
(
pmifidte,
pmifvtyp,
pmifadmn
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
