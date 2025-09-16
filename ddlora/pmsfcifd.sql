create table pmsfciaf
(
pmfcvisn    varchar2(8),
pmfcinvn    varchar2(8),
pmfctran    varchar2(6),
pmfcsyst    varchar2(2),
pmfccrno    varchar2(8),
pmfccrda    varchar2(8),
pmfcamtt    number(14,2),
pmfcamtg    number(14,2),
pmfcamth    number(14,2),
pmfcamti    number(14,2),
pmfcamtp    number(14,2),
pmfcrbat    number(14,2),
pmfccamt    number(14,2),
pmfctdat    varchar2(8),
pmfcadat    varchar2(8),
pmfcitem    varchar2(9),
pmfcdesc    varchar2(30),
pmfcdes2    varchar2(35),
pmfcrtyp    varchar2(1),
pmfcnday    number(4,0),
pmfcclai    number(1,0),
pmfctdoc    varchar2(6),
pmfcserv    number(5,0),
pmfcodoc    varchar2(6),
pmfcsess    varchar2(2),
pmfcmgrp    varchar2(3),
pmfcward    varchar2(3),
pmfcctyp    varchar2(3),
pmfcatyp    varchar2(3),
pmfcbtch    varchar2(8),
pmfcninv    number(1,0),
pmfcptls    number(14,2),
pmfcrbls    number(14,2),
pmfcdtyp    number(1,0),
pmfcaddc    number(1,0),
pmfcgsta    number(1,0),
pmfcgstc    varchar2(6),
pmfcgstm    number(14,2),
pmfccgst    number(14,2),
pmfcgstl    number(14,2),
pmfcatfi    varchar2(8),
pmfcdupd    varchar2(8),
pmfctupd    varchar2(8),
pmfcwusr    varchar2(10),
pmfcspar    varchar2(30),
lf          varchar2(1),
constraint pmsfcia1 primary key( 
pmfcvisn,
pmfcinvn,
pmfctran,
pmfccrno)
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
create public synonym pmsfciaf for pmsfciaf;
create unique index pmsfcia2 on pmsfciaf
(
pmfcvisn,
pmfcinvn,
pmfcrtyp,
pmfctran,
pmfccrno
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index pmsfcia3 on pmsfciaf
(
pmfccrno,
pmfcvisn,
pmfcinvn,
pmfcrtyp,
pmfctran
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
