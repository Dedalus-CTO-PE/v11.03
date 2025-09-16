create table pmsfciaf
(
pmfcvisn    char(8),
pmfcinvn    char(8),
pmfctran    char(6),
pmfcsyst    char(2),
pmfccrno    char(8),
pmfccrda    char(8),
pmfcamtt    decimal(14,2),
pmfcamtg    decimal(14,2),
pmfcamth    decimal(14,2),
pmfcamti    decimal(14,2),
pmfcamtp    decimal(14,2),
pmfcrbat    decimal(14,2),
pmfccamt    decimal(14,2),
pmfctdat    char(8),
pmfcadat    char(8),
pmfcitem    char(9),
pmfcdesc    char(30),
pmfcdes2    char(35),
pmfcrtyp    char(1),
pmfcnday    decimal(4,0),
pmfcclai    decimal(1,0),
pmfctdoc    char(6),
pmfcserv    decimal(5,0),
pmfcodoc    char(6),
pmfcsess    char(2),
pmfcmgrp    char(3),
pmfcward    char(3),
pmfcctyp    char(3),
pmfcatyp    char(3),
pmfcbtch    char(8),
pmfcninv    decimal(1,0),
pmfcptls    decimal(14,2),
pmfcrbls    decimal(14,2),
pmfcdtyp    decimal(1,0),
pmfcaddc    decimal(1,0),
pmfcgsta    decimal(1,0),
pmfcgstc    char(6),
pmfcgstm    decimal(14,2),
pmfccgst    decimal(14,2),
pmfcgstl    decimal(14,2),
pmfcatfi    char(8),
pmfcdupd    char(8),
pmfctupd    char(8),
pmfcwusr    char(10),
pmfcspar    char(30),
lf          char(1)
);
create unique index pmsfcia1 on pmsfciaf
(
pmfcvisn,
pmfcinvn,
pmfctran,
pmfccrno
);
create unique index pmsfcia2 on pmsfciaf
(
pmfcvisn,
pmfcinvn,
pmfcrtyp,
pmfctran,
pmfccrno
);
create unique index pmsfcia3 on pmsfciaf
(
pmfccrno,
pmfcvisn,
pmfcinvn,
pmfcrtyp,
pmfctran
);
revoke all on pmsfciaf from public ; 
grant select on pmsfciaf to public ; 
