create table pmsfmsaf
(
pmfmhosp    char(3),
pmfmsyst    char(1),
pmfmrsub    char(1),
pmfmcode    char(13),
pmfmfdis    char(5),
pmfmfres    char(4),
pmfmfled    char(2),
pmfmfcrd    char(12),
pmfmfdeb    char(12),
pmfmgsta    char(12),
pmfmtdis    char(5),
pmfmtres    char(4),
pmfmtled    char(2),
pmfmtcrd    char(12),
pmfmtdeb    char(12),
pmfmbasc    char(3),
pmfmspar    char(80),
lf          char(1)
);
create unique index pmsfmsa1 on pmsfmsaf
(
pmfmhosp,
pmfmsyst,
pmfmrsub,
pmfmcode
);
revoke all on pmsfmsaf from public ; 
grant select on pmsfmsaf to public ; 
