function validateForm() {
  const nama = document.getElementById("nama").value;
  const tujuan = document.getElementById("tujuan").value;
  const tanggal = document.getElementById("tanggal").value;
  if (nama === "" || tujuan === "" || tanggal === "") {
    alert("Semua field harus diisi!");
    return false;
  }
  alert("Pemesanan berhasil dikirim!");
  return true;
}

function validateSaranForm() {
  const nama = document.getElementById("saran-nama").value;
  const email = document.getElementById("saran-email").value;
  const pesan = document.getElementById("saran-pesan").value;
  if (nama === "" || email === "" || pesan === "") {
    alert("Semua field kritik & saran harus diisi!");
    return false;
  }
  alert("Kritik dan saran dikirim!");
  return true;
}